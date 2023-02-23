# **0x1C. C - Makefiles**

In this project, we learn about makefiles and how to use them

## **What is a Makefile?**

A Makefile consists of a set of rules. A rule generally looks like this: targets: prerequisites command command command. The targets are file names, separated by spaces. Typically, there is only one per rule. The commands are a series of steps typically used to make the target(s).

## **Tasks**

## **Tasks 0 - make -f 0-Makefile**
[0-Makefile](./0-Makefile) - Create your first Makefile.

<details>
    <summary><strong>Requirements:</strong></summary>
    <ul>
        <li>name of the executable: school</li>
        <li>rules: all
            <ul>
                <li>The all rule builds your executable</li>
            </ul>
        </li>
        <li>variables: none</li>
    </ul>
</details>

---

## **Tasks 1 - make -f 1-Makefile**
[1-Makefile](./1-Makefile)

<details>
    <summary><strong>Requirements:</strong></summary>
    <ul>
        <li>name of the executable: school</li>
        <li>rules: all
            <ul>
                <li>The all rule builds your executable</li>
            </ul>
        </li>
        <li>variables: CC, SRC
            <ul>
                <li>CC: the compiler to be used</li>
                <li>SRC: the .c files</li>
            </ul>
        </li>
    </ul>
</details>

---

## **Task 2 - make -f 2-Makefile**
[2-Makefile](./2-Makefile)

<details>
    <summary><strong>Requirements:</strong></summary>
    <ul>
        <li>name of the executable: school</li>
        <li>rules: all
            <ul>
                <li>The all rule builds your executable</li>
            </ul>
        </li>
        <li>variables: CC, SRC, OBJ, NAME
            <ul>
                <li>CC: the compiler to be used</li>
                <li>SRC: the .c files</li>
                <li>OBJ: the .o files</li>
                <li>NAME: the name of the executable</li>
            </ul>
        </li>
        <li>The all rule should recompile only the updated source files</li>
        <li>You are not allowed to have a list of all the .o files</li>
    </ul>

</details>

---

## **Task 3 - make -f 3-Makefile**
[3-Makefile](./3-Makefile)

<details>
    <summary><strong>Requirements:</strong></summary>
    <ul>
        <li>name of the executable: school</li>
        <li>rules: all, clean, oclean, fclean, re
            <ul>
                <li>all: builds your executable</li>
                <li>clean: deletes all Emacs and Vim temporary files along with the executable</li>
                <li>oclean: deletes the object files</li>
                <li>fclean: deletes all Emacs and Vim temporary files, the executable, and the object files</li>
                <li>re: forces recompilation of all source files</li>
            </ul>
        </li>
        <li>variables: CC, SRC, OBJ, NAME, RM
            <ul>
                <li>CC: the compiler to be used</li>
                <li>SRC: the .c files</li>
                <li>OBJ: the .o files</li>
                <li>NAME: the name of the executable</li>
                <li>RM: the program to delete files</li>
            </ul>
        </li>
        <li>The all rule should recompile only the updated source files</li>
        <li>The clean, oclean, fclean, re rules should never fail</li>
        <li>You are not allowed to have a list of all the .o files</li>
    </ul>
</details>
