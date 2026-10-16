#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igRefMetaField_getMeta();
extern char igRefMetaField_fieldTypes[8];
extern char igRefMetaField_fieldNames[8];
extern char igRefMetaField_fieldStorage[8];
extern char igRefMetaField_fieldOffsets[8];
extern void *igRefMetaField_meta;
extern void *lbl_80561688;
extern void *lbl_805621F4;
}
extern "C" {
void fn_80027454(){
 if(!lbl_80561688){
  void *object=(lbl_80561688=meta_createInstance(igRefMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561688));
   reinterpret_cast<short *>(lbl_80561688)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561688);
  }
 }
}
}
#pragma pop
