#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beCriHandleList_arkRegister();
void *fn_802F7294();
extern char beCriSfpData_fieldTypes[];
extern char beCriSfpData_fieldNames[];
extern char beCriSfpData_fieldStorage[];
extern char beCriSfpData_fieldOffsets[];
extern void *beCriSfpData_meta;
extern void *beCriHandleList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void beCriSfpData_fieldInit(){
 void *meta=beCriSfpData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beCriSfpData_fieldTypes,0x4);
 meta_setupFields(meta,beCriSfpData_fieldNames,beCriSfpData_fieldStorage,beCriSfpData_fieldOffsets,field);
}
void *fn_802DEB14(){return fn_802F7294();}
void *beCriHandleList_metaObject(){
 if(!beCriHandleList_meta) beCriHandleList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCriHandleList_meta;
}
void *beCriHandleList_getMeta(){
 if(!beCriHandleList_meta || !(reinterpret_cast<unsigned int *>(beCriHandleList_meta)[0x24/4]&4)) beCriHandleList_arkRegister();
 return beCriHandleList_meta;
}
}
#pragma pop
