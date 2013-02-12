#include "linux/kernel.h"
#include "linux/unistd.h"

#include <asm/cacheflush.h>

asmlinkage int sys_wbcachemem( void) {

 
  	
  printk("you call wbcachemem syscall\n");
  
  user_wbcache_range();

 // user_set_memory_uc(v_addr);
	
  printk("wbcachemem over\n");

  return 0;
}
