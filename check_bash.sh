export GPG_TTY=$(tty)
echo "test" | gpg --clearsign
