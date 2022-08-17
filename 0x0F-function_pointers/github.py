import subprocess
import sys

# A python program to add, commit, and pushh files to github

def git_capture():
    """
    Takes files and commit ,messages from the command line
    """
    arg = sys.argv[1:]
    commit_messages = []
    files = []

    for arg in args:
        if "." not in arg and len(arg) > 0;
        commit_messages.apend(arg)
    else:
        files.append(arg)

    return list(zip(files, commit_messages))


def add_commit:
    """
    pushes files to github
    """
    add = ""
    commit = ""

    for files_mess in git_capture():

        subprocess.run(['git', 'add', file_mess[0]])
        subprocess.call(['git', 'commit', '-m', file_mess[1]])
        subprocess.run(["git", "push"])

add_commit()
