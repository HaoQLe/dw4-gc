#include <igGap.h>
extern "C" void *memcpy(void *, const void *, unsigned long);
extern "C" void *memmove(void *, const void *, unsigned long);

// Synthetic storage view; only observed fields are represented.
struct Unknown800416D8 {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    Gap::igInt unknown0C;
    unsigned char *unknown10;
};
typedef Gap::igInt (*Unknown800416D8Compare)(const void *, const void *);
extern "C" void fn_80041660(Unknown800416D8 *, Gap::igInt, Gap::igInt);

#pragma push
#pragma auto_inline off
extern "C" void fn_800416D8(Unknown800416D8 *object, int index, int count, const void *values, int width){
    if(index < 0 || index > object->unknown08) return;
    if(count < 0) return;
    if(count == 0) return;
    int previous = object->unknown08;
    int next = previous + count;
    if(next <= object->unknown0C) object->unknown08 = next;
    else fn_80041660(object, next, width);
    int bytes = count * width;
    unsigned char *destination = object->unknown10 + index * width;
    unsigned char *tail = destination + bytes;
    int remaining = previous - index;
    if(remaining) memmove(tail, destination, remaining * width);
    memcpy(destination, values, bytes);
}
extern "C" void fn_80041790(Unknown800416D8 *object, int count, const void *values, int width){
    if(count < 0) return;
    if(count == 0) return;
    int previous = object->unknown08;
    int next = previous + count;
    if(next <= object->unknown0C) object->unknown08 = next;
    else fn_80041660(object, next, width);
    memcpy(object->unknown10 + previous * width, values, count * width);
}
extern "C" void fn_80041810(Unknown800416D8 *object, int index, int width){
    int count = object->unknown08;
    if(count <= 0) return;
    if(index < 0 || index >= count) return;
    if(index != count - 1){
        unsigned char *destination = object->unknown10 + index * width;
        memmove(destination, destination + width, width * (count - (index + 1)));
    }
    --object->unknown08;
}
extern "C" int fn_80041894(Unknown800416D8 *object, const void *value, Unknown800416D8Compare compare, int width){
    int low = 0;
    int high = object->unknown08 - 1;
    while(low < high){
        int middle = (low + high) >> 1;
        int result = compare(object->unknown10 + width * middle, value);
        if(result < 0) low = middle + 1;
        else if(result > 0) high = middle - 1;
        else return middle;
    }
    if(object->unknown08 == 0) return -1;
    return compare(object->unknown10 + width * low, value) == 0 ? low : -1;
}
extern "C" void fn_80041970(Unknown800416D8 *object, unsigned int value){
    int previous = object->unknown08;
    fn_80041660(object, previous + 1, 4);
    reinterpret_cast<unsigned int *>(object->unknown10)[previous] = value;
}
extern "C" int fn_800419C0(Unknown800416D8 *object, const void *value, Unknown800416D8Compare compare, int start){
    int count = object->unknown08;
    unsigned int *entry = reinterpret_cast<unsigned int *>(object->unknown10) + start;
    int index = start;
    while(index < count){
        if(compare(entry, value) == 0) return index;
        ++index;
        ++entry;
    }
    return -1;
}
extern "C" void fn_80041A44(Unknown800416D8 *object, int index, int count, const void *values){
    if(index < 0 || index > object->unknown08) return;
    if(count < 0) return;
    if(count == 0) return;
    int previous = object->unknown08;
    int next = previous + count;
    if(next <= object->unknown0C) object->unknown08 = next;
    else fn_80041660(object, next, 4);
    int bytes = count * 4;
    unsigned char *destination = object->unknown10 + index * 4;
    unsigned char *tail = destination + bytes;
    int remaining = previous - index;
    if(remaining) memmove(tail, destination, remaining * 4);
    memcpy(destination, values, bytes);
}
extern "C" void fn_80041AF8(Unknown800416D8 *object, int count, const void *values){
    if(count < 0) return;
    if(count == 0) return;
    int previous = object->unknown08;
    int next = previous + count;
    if(next <= object->unknown0C) object->unknown08 = next;
    else fn_80041660(object, next, 4);
    memcpy(object->unknown10 + previous * 4, values, count * 4);
}
extern "C" void fn_80041B74(Unknown800416D8 *object, int index, int count){
    int previous = object->unknown08;
    if(previous <= 0) return;
    if(index < 0 || index >= previous) return;
    if(count < 0) return;
    if(index + count > previous) return;
    if(count == 0) return;
    int remaining = previous - (index + count);
    if(remaining > 0){
        unsigned char *destination = object->unknown10 + index * 4;
        memmove(destination, destination + count * 4, remaining * 4);
    }
    object->unknown08 = previous - count;
}
extern "C" void fn_80041C10(Unknown800416D8 *object, int index){
    int count = object->unknown08;
    if(count <= 0) return;
    if(index < 0 || index >= count) return;
    if(index != count - 1){
        unsigned char *destination = object->unknown10 + index * 4;
        memmove(destination, destination + 4, (count - (index + 1)) * 4);
    }
    --object->unknown08;
}
extern "C" int fn_80041C90(Unknown800416D8 *object, const void *value, Unknown800416D8Compare compare){
    int low = 0;
    int high = object->unknown08 - 1;
    while(low < high){
        int middle = (low + high) >> 1;
        int result = compare(object->unknown10 + middle * 4, value);
        if(result < 0) low = middle + 1;
        else if(result > 0) high = middle - 1;
        else return middle;
    }
    if(object->unknown08 == 0) return -1;
    return compare(object->unknown10 + low * 4, value) == 0 ? low : -1;
}
extern "C" int fn_80041D68(Unknown800416D8 *object, const void *value, Unknown800416D8Compare compare){
    int low = 0;
    int high = object->unknown08 - 1;
    while(low < high){
        int middle = (low + high) >> 1;
        int result = compare(object->unknown10 + middle * 4, value);
        if(result < 0) low = middle + 1;
        else if(result > 0) high = middle - 1;
        else return middle;
    }
    if(object->unknown08 == 0) return 0;
    return compare(object->unknown10 + low * 4, value) < 0 ? low + 1 : low;
}
#pragma pop
