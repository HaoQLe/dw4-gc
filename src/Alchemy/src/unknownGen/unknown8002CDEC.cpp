#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igLongTimer_fieldInit();
void *igLongTimer_getMetaCall();
void igTimer_register();
extern char igLongTimer_className[];
extern void *igTimer_meta;
extern void *igLongTimer_meta;
void igLongTimer_arkRegister();
void igLongTimer_register();
void *igLongTimer_parentMeta();
}
extern "C" {
void *igLongTimer_parentMeta(){return igTimer_meta;}
}
#pragma pop
