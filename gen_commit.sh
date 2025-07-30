#!/bin/zsh

# Select prefix interactively
prefixes=("solved" "retry" "model")
echo "Select prefix:"
select prefix in "${prefixes[@]}"; do
  if [[ -n "$prefix" ]]; then
    break
  fi
done

# If file_path is specified, use it. Otherwise, automatically get the first added file from git.
if [ $# -ge 1 ]; then
  file_path="$1"
else
  file_path=$(git status --porcelain | awk '/^A |^\?\?/ {print $2}' | head -n 1)
  if [ -z "$file_path" ]; then
    echo "No added file found."
    exit 1
  fi
fi

# Example: atCoder/abc/386/a__fullHouse2/my.cpp → abc 386 a
if [[ "$file_path" =~ atCoder/([^/]+)/([^/]+)/([a-z])__ ]]; then
  contest_type="${match[1]}"
  contest_num="${match[2]}"
  problem_num="${match[3]}"
  commit_msg="${prefix}: ${contest_type} ${contest_num} ${problem_num}"
  echo "$commit_msg"
  git commit -m "$commit_msg"
else
  echo "Invalid path format: $file_path"
  exit 1
fi