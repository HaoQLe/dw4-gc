#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_80034048();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igMetaField_register();
extern char igCompoundMetaField_dependencies[];
extern char igCompoundMetaField_className[];
extern char igCompoundMetaField_fieldTypes[4];
extern char igCompoundMetaField_fieldNames[4];
extern char igCompoundMetaField_fieldStorage[4];
extern char igCompoundMetaField_fieldOffsets[4];
extern void *igCompoundMetaField_meta;
extern void *lbl_80561E14;
extern void *lbl_805621F4;
void *igCompoundMetaField_getMeta();
void igCompoundMetaField_arkRegister();
void igCompoundMetaField_register();
void *igCompoundMetaField_getMetaCall();
void igCompoundMetaField_fieldInit();
}
extern "C" {
void fn_80037A54(){
 if(!lbl_80561E14){
  void *object=(lbl_80561E14=meta_createInstance(igCompoundMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E14));
   reinterpret_cast<short *>(lbl_80561E14)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E14);
  }
 }
}
int fn_80037AEC(){return 1;}
}
#pragma pop
