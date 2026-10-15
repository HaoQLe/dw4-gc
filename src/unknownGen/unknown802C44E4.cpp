#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNodeAnim_arkRegister();
void *fn_803116A4();
extern char beLoadingNode_fieldTypes[];
extern char beLoadingNode_fieldNames[];
extern char beLoadingNode_fieldStorage[];
extern char beLoadingNode_fieldOffsets[];
extern void *beLoadingNode_meta;
extern void *beNodeAnim_meta;
}
extern "C" {
void *fn_802C44E4(){return fn_803116A4();}
void *beNodeAnim_getMeta(){
 if(!beNodeAnim_meta || !(reinterpret_cast<unsigned int *>(beNodeAnim_meta)[0x24/4]&4)) beNodeAnim_arkRegister();
 return beNodeAnim_meta;
}
}
#pragma pop
