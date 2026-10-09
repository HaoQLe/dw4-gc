#include <unknownGen.h>
#include <meta/igStandardQueue.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800681C4(void *,void *);
void fn_80068390(void *,void *);
}
extern "C" {
void igStandardQueue_virtual5C(int p0){
 void *value0=fn_800681C4((void *)p0,(void *)(int)((int)(void *)reinterpret_cast<Meta::igStandardQueue *>((void *)p0)->_capacity<<2));
 reinterpret_cast<Meta::igStandardQueue *>((void *)p0)->_data=(void *)value0;
}
void igStandardQueue_virtual60(int p0){
 fn_80068390((void *)p0,reinterpret_cast<Meta::igStandardQueue *>((void *)p0)->_data);
 reinterpret_cast<Meta::igStandardQueue *>((void *)p0)->_data=(void *)0;
}
}
#pragma pop
