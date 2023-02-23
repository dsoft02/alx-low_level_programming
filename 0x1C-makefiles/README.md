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

---

## **Task 4 - A complete Makefile**
[4-Makefile](./4-Makefile)

<details>
    <summary><strong>Requirements:</strong></summary>
    <ul>
        <li>name of the executable: <code>school</code></li>
        <li>rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>
            <ul>
                <li><code>all</code>: builds your executable</li>
                <li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
                <li><code>oclean</code>: deletes the object files</li>
                <li><code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files</li>
                <li><code>re</code>: forces recompilation of all source files</li>
            </ul>
        </li>
        <li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>
            <ul>
                <li><code>CC</code>: the compiler to be used</li>
                <li><code>SRC</code>: the <code>.c</code> files</li>
                <li><code>OBJ</code>: the <code>.o</code> files</li>
                <li><code>NAME</code>: the name of the executable</li>
                <li><code>RM</code>: the program to delete files</li>
                <li><code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code></li>
            </ul>
        </li>
        <li>The <code>all</code> rule should recompile only the updated source files</li>
        <li><p>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</p></li>
        <li><p>You are not allowed to have a list of all the <code>.o</code> files</p></li>
    </ul>
</details>

---

## **Task 5-island_perimeter.py**
[5-island_perimeter.py](./5-island_perimeter.py)

<details>
    <summary><strong>Technical interview preparation:</strong></summary>
    <ul>
        <li>You are not allowed to google anything</li>
        <li>Whiteboard first</li>
    </ul>
    <p>Create a function <code>def island_perimeter(grid):</code> that returns the perimeter of the island described in <code>grid</code>:</p>
    <ul>
        <li><code>grid</code> is a list of list of integers:
            <ul>
                <li>0 represents a water zone</li>
                <li>1 represents a land zone</li>
                <li>One cell is a square with side length 1</li>
                <li>Grid cells are connected horizontally/vertically (not diagonally). </li>
                <li>Grid is rectangular, width and height don’t exceed 100</li>
            </ul>
        </li>
        <li>Grid is completely surrounded by water, and there is one island (or nothing).</li>
        <li>The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).</li>
    </ul>
    <p>Requirements:</p>
    <ul>
        <li>First line contains <code>#!/usr/bin/python3</code></li>
        <li>You are not allowed to import any module</li>
        <li>Module and function must be documented</li>
    </ul>
</details>