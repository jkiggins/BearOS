/**
 * @file gpio.h
 * @author qzpv
 * @brief 
 * @version 0.1
 * @date 2019-08-21
 * 
 * @copyright Copyright (c) 2019
 * 
 */

namespace BearOS
{

    struct tsGpioDesc;

    class tcGpio
    {
    public:
        tcGpio(struct tsGpioDesc, bool defer = false);
        ~tcGpio();

        int init();
        
    }
    
} // namespace BearOS


