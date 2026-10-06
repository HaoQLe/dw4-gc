#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void AXARTServiceSounds();
void MIXUpdateSettings();
void OSAllocFromHeap(void *,void *);
void OSFreeToHeap(void *,void *);
extern void *__OSCurrHeap;
void fn_803C325C();
}
extern "C" {
void fn_802A8F1C(int p0){
 OSAllocFromHeap(__OSCurrHeap,(void *)p0);
}
void fn_802A8F4C(int p0){
 OSFreeToHeap(__OSCurrHeap,(void *)p0);
}
void fn_802A8F7C(){
 fn_803C325C();
 AXARTServiceSounds();
 MIXUpdateSettings();
}
}
#pragma pop
