#include "dog.h"

/**
 *  * init_dog - Initializes a struct dog
 *   * @d: Pointer to struct dog
 *    * @name: Pointer to name string
 *     * @age: Age of dog
 *      * @owner: Pointer to owner string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
