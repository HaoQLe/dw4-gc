#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beLuaInfo_arkRegister();
extern char beLuaState_fieldTypes[];
extern char beLuaState_fieldNames[];
extern char beLuaState_fieldStorage[];
extern char beLuaState_fieldOffsets[];
extern void *beLuaState_meta;
extern void *beLuaInfo_meta;
}
extern "C" {
void beLuaState_fieldInit(){
 void *meta=beLuaState_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beLuaState_fieldTypes,0x1);
 meta_setupFields(meta,beLuaState_fieldNames,beLuaState_fieldStorage,beLuaState_fieldOffsets,field);
}
void *beLuaInfo_getMeta(){
 if(!beLuaInfo_meta || !(reinterpret_cast<unsigned int *>(beLuaInfo_meta)[0x24/4]&4)) beLuaInfo_arkRegister();
 return beLuaInfo_meta;
}
}
#pragma pop
