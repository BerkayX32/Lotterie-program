#include <linux/schedull.h>
#include <asm/current.h>
#include <linux/sched.h>
#include <asm/uaccess.h>

int choice=1;

asmlinkage int sys_schedull(int choice1){
	//0 for lottery,else default
	choice=choice1;
	return 0;
}
