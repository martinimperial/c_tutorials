…or create a new repository on the command line

echo "# c_tutorials" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/martinimperial/c_tutorials.git
git push -u origin main

…or push an existing repository from the command line
git remote add origin https://github.com/martinimperial/c_tutorials.git
git branch -M main
git push -u origin main

…or import code from another repository
You can initialize this repository with code from a Subversion, Mercurial, or TFS project.


git status
git add .
git commit -m "xxx"
git push

Open the command line.

Set your username:
git config --global user.name "FIRST_NAME LAST_NAME"

Set your email address:
git config --global user.email "MY_NAME@example.com"

