find . -iname "*.sh" -exec sh -c 'echo "$(basename "{}" .txt)"' \; | sed "s/\.sh//"
