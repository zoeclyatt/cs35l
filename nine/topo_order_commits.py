import os
import sys
import zlib

#discover the .git directory
def get_git():
    found = False
    git_dir = ''
    while found == False:
        for file in os.listdir():
            if file == '.git':
                found = True
                git_dir = os.getcwd()
        if os.getcwd() == '/':
            break
        os.chdir('..')
    if found == False:
        sys.stderr.write("Not inside a Git repository")
        exit(1)
    else:
        return git_dir

#get list of local branch names
def get_branches(git_path):
    os.chdir(git_path)
    os.chdir('.git/refs/heads')
    return os.listdir()

class CommitNode:
    def __init__(self, commit_hash):
        """
        :type commit_hash: str
        """
        self.commit_hash = commit_hash
        self.parents = set()
        self.children = set()

#build the commit graph
#at this point, i couldn't figure out to get the commits without using the git log command 
def assign_nodes(branches):
    graph = ''
    for branch in branches:
        os.chdir(getgit() + ".git/logs/refs/heads")
    
print(get_branches(get_git()))
