#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void igFileNameList_arkRegister();
extern char igAdxAfsFile_fieldTypes[];
extern char igAdxAfsFile_fieldNames[];
extern char igAdxAfsFile_fieldStorage[];
extern char igAdxAfsFile_fieldOffsets[];
extern void *igAdxAfsFile_meta;
extern void *igFileNameList_meta;
}
extern "C" {
void igAdxAfsFile_fieldInit(){
 void *meta=igAdxAfsFile_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,igAdxAfsFile_fieldTypes,0x2);
 meta_setupFields(meta,igAdxAfsFile_fieldNames,igAdxAfsFile_fieldStorage,igAdxAfsFile_fieldOffsets,field);
}
void *igFileNameList_getMeta(){
 if(!igFileNameList_meta || !(reinterpret_cast<unsigned int *>(igFileNameList_meta)[0x24/4]&4)) igFileNameList_arkRegister();
 return igFileNameList_meta;
}
}
#pragma pop
