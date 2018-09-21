# get project directory no matter what the current directory is
PROJECT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

echo "Clean the $PROJECT_DIR Debug/Release folders"
rm -r -f $PROJECT_DIR/Debug* >/dev/null 2>&1
rm -r -f $PROJECT_DIR/Release* >/dev/null 2>&1

