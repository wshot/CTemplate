#ifndef __DISPLAY_ADAPTER_H__
#define __DISPLAY_ADAPTER_H__

class DisplayAdapter
{
public:
    DisplayAdapter() {}
    ~DisplayAdapter() {}

    virtual int backlightOn(void);
    virtual int backlightOff(void);
};

#endif //__DISPLAY_ADAPTER_H__