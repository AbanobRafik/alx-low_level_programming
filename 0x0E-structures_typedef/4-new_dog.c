#include "dog.h"
#define MAIN_H
#ifndef MAIN_H
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 0-main.ht" > README.md
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 0-main.h

========== 0-main.h ==========
0-main.h:1: WARNING: This line is not protected from double inclusion
0-main.h:2: WARNING: This line is not protected from double inclusion
0-main.h:4: WARNING: This line is not protected from double inclusion
0-main.h:5: WARNING: This line is not protected from double inclusion
0-main.h:6: WARNING: This line is not protected from double inclusion
0-main.h:7: WARNING: This line is not protected from double inclusion
0-main.h:8: WARNING: This line is not protected from double inclusion
0-main.h:9: WARNING: This line is not protected from double inclusion
0-main.h:10: WARNING: This line is not protected from double inclusion
0-main.h:11: WARNING: This line is not protected from double inclusion
0-main.h:13: WARNING: This line is not protected from double inclusion
0-main.h:14: WARNING: This line is not protected from double inclusion
0-main.h:15: WARNING: This line is not protected from double inclusion
0-main.h:16: WARNING: This line is not protected from double inclusion
0-main.h:17: WARNING: This line is not protected from double inclusion
0-main.h:18: WARNING: This line is not protected from double inclusion
total: 0 errors, 16 warnings, 18 lines checked
main
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# mv 0-main.h 0-main.c
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 0-main.c

========== 0-main.c ==========
main
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git add .
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "struct"
[master 7df8388] struct
 3 files changed, 38 insertions(+)
	 create mode 100644 0x0E-structures_typedef/0-main.c
	  create mode 100644 0x0E-structures_typedef/README.md
	   create mode 100644 0x0E-structures_typedef/dog.h
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
	   To https://github.com/AbanobRafik/alx-low_level_programming.git
	    ! [rejected]        master -> master (fetch first)
	error: failed to push some refs to 'https://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@github.com/Aba
	el_programming.git'
	hint: Updates were rejected because the remote contains work that you do
	hint: not have locally. This is usually caused by another repository pushing
	hint: to the same ref. You may want to first integrate the remote changes
	hint: (e.g., 'git pull ...') before pushing again.
	hint: See the 'Note about fast-forwards' in 'git push --help' for details.
	root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git pull
	remote: Enumerating objects: 10, done.
	remote: Counting objects: 100% (10/10), done.
	remote: Compressing objects: 100% (6/6), done.
	remote: Total 9 (delta 2), reused 9 (delta 2), pack-reused 0
	Unpacking objects: 100% (9/9), 1.06 KiB | 544.00 KiB/s, done.
	From https://github.com/AbanobRafik/alx-low_level_programming
	   83d8e92..4cdeb93  master     -> origin/master
	   CONFLICT (add/add): Merge conflict in 0x0E-structures_typedef/dog.h
			       Auto-merging 0x0E-structures_typedef/dog.h
					     CONFLICT (add/add): Merge conflict in 0x0E-structures_typedef/README.md
								 Auto-merging 0x0E-structures_typedef/README.md
										      CONFLICT (add/add): Merge conflict in 0x0E-structures_typedef/0-main.c
													  Auto-merging 0x0E-structures_typedef/0-main.c
															       Automatic merge failed; fix conflicts and then commit the result.
															       root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
															       To https://github.com/AbanobRafik/alx-low_level_programming.git
															        ! [rejected]        master -> master (non-fast-forward)
	error: failed to push some refs to 'https://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@github.com/Aba
	       el_programming.git'
	       hint: Updates were rejected because the tip of your current branch is behind
	       hint: its remote counterpart. Integrate the remote changes (e.g.
			       hint: 'git pull ...') before pushing again.
#ifndef DOG_H
			     hint: See the 'Note about fast-forwards' in 'git push --help' for details.
			     root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "dog"
			     U       0x0E-structures_typedef/0-main.c
			     U       0x0E-structures_typedef/README.md
			     U       0x0E-structures_typedef/dog.h
			     error: Committing is not possible because you have unmerged files.
			     hint: Fix them up in the work tree, and then use 'git add/rm <file>'
			     hint: as appropriate to mark resolution and make a commit.
			     fatal: Exiting because of an unresolved conflict.
			     root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git add .
			     root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "dog"
			     [master a28e8a3] dog
			     root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
			     Enumerating objects: 18, done.
			     Counting objects: 100% (18/18), done.
			      *     * @age: age of the dog
			      *     Delta compression using up to 2 threads
			      *     #include <stdio.h>
			      *     Compressing objects: 100% (11/11), done.
			      *     Writing objects: 100% (12/12), 1.29 KiB | 1.29 MiB/s, done.
			      *     Total 12 (delta 5), reused 0 (delta 0)
	*     remote: Resolving deltas: 100% (5/5), completed with 2 local objects.
	*     To https://github.com/AbanobRafik/alx-low_level_programming.git
	*        4cdeb93..a28e8a3  master -> master
	*        root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
	*        root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git add .
	*        root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "dog"
	*        [master fc08c0f] dog
	*         1 file changed, 12 insertions(+), 19 deletions(-)
	*         root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
	*         Enumerating objects: 7, done.
	*         Counting objects: 100% (7/7), done.
	*         Delta compression using up to 2 threads
	*         Compressing objects: 100% (4/4), done.
	*         Writing objects: 100% (4/4), 545 bytes | 545.00 KiB/s, done.
	*         Total 4 (delta 2), reused 0 (delta 0)
	*         remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
	*         To https://github.com/AbanobRafik/alx-low_level_programming.git
	*            a28e8a3..fc08c0f  master -> master
	*            #include <stdio.h>
	*            root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
	*            root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 0-main.c
	*            root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git add .
	*            root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "dog"
	*            [master 8777df7] dog
	*             2 files changed, 11 insertions(+), 22 deletions(-)
	*             root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
	*             Enumerating objects: 9, done.
	*             Counting objects: 100% (9/9), done.
	*             Delta compression using up to 2 threads
	*             Compressing objects: 100% (5/5), done.
	*             Writing objects: 100% (5/5), 575 bytes | 575.00 KiB/s, done.
	*             Total 5 (delta 3), reused 0 (delta 0)
	*             remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
	*             To https://github.com/AbanobRafik/alx-low_level_programming.git
	*                fc08c0f..8777df7  master -> master
	*                root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 0-main.c
	*
	*                ========== 0-main.c ==========
	*                 *     * @age: age of the dog
	*                 0-main.c:8: WARNING: Block comments use a trailing */ on a separate line
#ifndef DOG_H
	total: 0 errors, 1 warnings, 19 lines checked
	main
	root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 0-main.c
	root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git add .
	root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "dog"
	[master 1961c34] dog
	 1 file changed, 1 insertion(+), 1 deletion(-)
	root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
	Enumerating objects: 7, done.
	Counting objects: 100% (7/7), done.
	Delta compression using up to 2 threads
	Compressing objects: 100% (4/4), done.
	Writing objects: 100% (4/4), 395 bytes | 395.00 KiB/s, done.
	Total 4 (delta 2), reused 0 (delta 0)
	remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
	To https://github.com/AbanobRafik/alx-low_level_programming.git
	   8777df7..1961c34  master -> master
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 0-main.c

	   ========== 0-main.c ==========
	   main
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
#ifndef DOG_H
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# root@47d94386f09b:/alx-low_le
	   vel_programming/0x0E-structures_typedef# cat dog.h
#ifndef DOG_H
#define DOG_H

	   /**
	    *  *  * struct dog - dog structure
	    *   *   *
	    *    *    * @name: name of dog
	    *     *     * @age: age of the dog
	    *      *      * @owner: dog owner
	    *       *       *
	    *        */
	   struct dog
{
	        char *name;
		        float age;
			        char *owner;
};

#endif
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 *  *  * main - check the code for ALX School students.
 *   *   *
 *    *    * Return: Always 0.
 *     */
#ifndef DOG_H
#include "dog.h"
#include <stdio.h>
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty dog.h

========== dog.h ==========
struct dog
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git add .
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "a"
[master 1318aa3] a
 2 files changed, 1 insertion(+), 12 deletions(-)
	 create mode 100755 0x0E-structures_typedef/a
	 root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
	 Enumerating objects: 8, done.
	 Counting objects: 100% (8/8), done.
	 Delta compression using up to 2 threads
	 Compressing objects: 100% (5/5), done.
	 Writing objects: 100% (5/5), 2.94 KiB | 2.94 MiB/s, done.
	 Total 5 (delta 2), reused 0 (delta 0)
	remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
	To https://github.com/AbanobRafik/alx-low_level_programming.git
	   1961c34..1318aa3  master -> master
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 1-init_dog.c
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 1-main.c
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 1-main.c
#include "dog.h"

	   ========== 1-main.c ==========
	   main
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 1-init_dog.c

	   ========== 1-init_dog.c ==========
	   init_dog
#include "dog.h"
	   root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# gcc -Wall -pedantic -Werror -
	   Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
	   1-init_dog.c: In function ‘init_dog’:
	   1-init_dog.c:13:11: error: ‘NULL’ undeclared (first use in this function)
	      13 |  if (d != NULL)
	      |           ^~~~
	      1-init_dog.c:2:1: note: ‘NULL’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stdd
#include "dog.h"
	      ef.h>’?
	          1 | #include "dog.h"
		    +++ |+#include <stddef.h>
		        2 |
			1-init_dog.c:13:11: note: each undeclared identifier is reported only once for each function it app
			ears in
			   13 |  if (d != NULL)
	      |           ^~~~
	      root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 1-init_dog.c
	      root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# gcc -Wall -pedantic -Werror -
	      Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
	      1-init_dog.c:2:10: fatal error: stdlb.h: No such file or directory
	          2 | #include <stdlb.h>
		        |          ^~~~~~~~~
			compilation terminated.
			root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 1-init_dog.c
			root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# gcc -Wall -pedantic -Werror -
			Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
			1-init_dog.c:2:10: fatal error: stdef.h: No such file or directory
			    2 | #include <stdef.h>
			          |          ^~~~~~~~~
				  compilation terminated.
#ifndef DOG_H
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 1-init_dog.c
#include "dog.h"
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# gcc -Wall -pedantic -Werror -
				  Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# ./b
				  My name is Poppy, and I am 3.5 :) - Woof!
#include "dog.h"
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# #include <stdio.h>
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# #include "dog.h"
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef#
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# /**
													  abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
													  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef#  * main - check the code
													  bash: 0-main.c: command not found
													  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef#  *
													  bash: 0-main.c: command not found
													  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef#  * Return: Always 0.
													  bash: 0-main.c: command not found
													  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef#  */
				  bash: */: No such file or directory
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# int main(void)
				  bash: syntax error near unexpected token `('
						  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# {
						  >     struct dog my_dog;
						  >
						  >     my_dog.name = "Poppy";
						  >     my_dog.age = 3.5;
						  >     my_dog.owner = "Bob";
						  >     print_dog(&my_dog);
bash: syntax error near unexpected token `&'
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef#     return (0);
bash: syntax error near unexpected token `0'
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# }gcc -Wall -pedantic -Werror
-Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
bash: }gcc: command not found
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# gcc -Wall -pedantic -Werror -
Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# ./c
Name: Poppy
Age: 3.500000
Owner: Bob
root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git add .
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 2-main.c

#include <stdio.h>
				  ========== 2-main.c ==========
				  /**
				   * main
				   *
				   * root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# betty 2-print_dog.c
				   *
				   * ========== 2-print_dog.c ==========
				   * print_dog
				   * root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git commit -m "c"
				   * [master 9b89ac2] c
				   *  4 files changed, 39 insertions(+)
				   *   create mode 100644 0x0E-structures_typedef/2-main.c
				   *    create mode 100644 0x0E-structures_typedef/2-print_dog.c
				   *     create mode 100755 0x0E-structures_typedef/c
				   *     root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# git push
				   *     Enumerating objects: 10, done.
				   *     Counting objects: 100% (10/10), done.
				   *     Delta compression using up to 2 threads
				   *     Compressing objects: 100% (7/7), done.
				   *     Writing objects: 100% (7/7), 3.59 KiB | 3.59 MiB/s, done.
				   *     Total 7 (delta 3), reused 0 (delta 0)
				   *     remote: Resolving deltas: 100% (3/3), completed with 3 local objects.
				   *     To https://github.com/AbanobRafik/alx-low_level_programming.git
				   *        70a561d..9b89ac2  master -> master
				   */**
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi 2-main.c
#include <stdio.h>
				  root@47d94386f09b:/alx-low_level_programming/0x0E-structures_typedef# vi dog.h

				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  ~
				  -- INSERT --                                                                     0,1           All

