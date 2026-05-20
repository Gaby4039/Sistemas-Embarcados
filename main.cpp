#include <Arduino.h>

#include "../../common/hal.h"

#include "../../common/sm_t1.h"
#include "../../common/sm_t2.h"
#include "../../common/sm_t3.h"
#include "../../common/sm_temp.h"

int main(void)
{
    init();

    init_hal();

    sm_t1_init();
    sm_t2_init();
    sm_t3_init();
    sm_temp_init();

    while (1)
    {
        sm_t1_exec();
        sm_t2_exec();
        sm_t3_exec();
        sm_temp_exec();
    }

    return 0;
}
