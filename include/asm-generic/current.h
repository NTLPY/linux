/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_GENERIC_CURRENT_H
#define __ASM_GENERIC_CURRENT_H

#ifndef __ASSEMBLY__
#include <linux/thread_info.h>

/* Return the current task_struct pointer (generic). */
#define get_current() (current_thread_info()->task)
/* A shortcut to get the current task_struct pointer. */
#define current get_current()
#endif

#endif /* __ASM_GENERIC_CURRENT_H */
