#include "linux/kernel.h"
#include "linux/unistd.h"

#include <asm/cacheflush.h>

asmlinkage int sys_uncachemem( void) {

 
  	
  printk("you call uncache syscall\n");
  
  user_uncache_range();

 // user_set_memory_uc(v_addr);
	
  printk("uncache syscall over\n");

  return 0;
}
