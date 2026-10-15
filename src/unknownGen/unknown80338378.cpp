#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
extern char beNDMWPanelWaza_fieldTypes[];
extern char beNDMWPanelWaza_fieldNames[];
extern char beNDMWPanelWaza_fieldStorage[];
extern char beNDMWPanelWaza_fieldOffsets[];
extern void *beNDMWPanelWaza_meta;
}
extern "C" {
void beNDMWPanelWaza_fieldInit(){
 void *value0=beNDMWPanelWaza_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWPanelWaza_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 meta_setupFields(value0,beNDMWPanelWaza_fieldNames,beNDMWPanelWaza_fieldStorage,beNDMWPanelWaza_fieldOffsets,value1);
}
}
#pragma pop
