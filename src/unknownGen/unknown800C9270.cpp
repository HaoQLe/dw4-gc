#include <unknownGen.h>
#include <meta/igGamecubeAudioContext.h>
#include <meta/igGamecubeAudioSourceList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800C92A0(void *);
}
extern "C" {
void igGamecubeAudioContext_virtual98(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800C92A0((void *)(int)((int)reinterpret_cast<Meta::igGamecubeAudioSourceList *>(reinterpret_cast<Meta::igGamecubeAudioContext *>((void *)p0)->_sources)->_data+(p1*60)));
}
}
#pragma pop
