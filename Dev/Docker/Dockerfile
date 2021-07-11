# syntax=docker/dockerfile:1
FROM manjarolinux/base
WORKDIR /
RUN pacman -Sy && pacman -S ruby python perl java racket binutils build-essentials ghc
CMD ["gem", "install", "jekyll", "bundler", "sinatra"]
CMD ["python3", "-m", "ensurepip"]
CMD ["python3", "-m", "pip", "install", "--upgrade", "pip"]
CMD ["python3", "-m", "pip", "install", "flask", "discord"]