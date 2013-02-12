#include "linux/kernel.h"
#include "linux/unistd.h"

#include <asm/cacheflush.h>


asmlinkage  int sys_flushallcache(void){

	int ret=0;
	printk("you call flushallcache syscall\n");
	user_flushallcache();
	printk("flushallcache over\n");
 	return ret;
}
 
 
