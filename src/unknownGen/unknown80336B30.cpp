#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWPanelWazaInfoWork_metaObject();
extern char beNDMWPanelWazaInfoRam_fieldTypes[];
extern char beNDMWPanelWazaInfoRam_fieldNames[];
extern char beNDMWPanelWazaInfoRam_fieldStorage[];
extern char beNDMWPanelWazaInfoRam_fieldOffsets[];
extern void *beNDMWPanelWazaInfoRam_meta;
}
extern "C" {
void beNDMWPanelWazaInfoRam_fieldInit(){
 void *value0=beNDMWPanelWazaInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWPanelWazaInfoRam_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWPanelWazaInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWPanelWazaInfoRam_fieldNames,beNDMWPanelWazaInfoRam_fieldStorage,beNDMWPanelWazaInfoRam_fieldOffsets,value1);
}
}
#pragma pop
