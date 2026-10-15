#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igViewerSceneInfoManager_metaObject();
extern char lbl_804E2A1C[];
extern char lbl_804E2A24[];
extern char lbl_804E2A2C[];
extern char lbl_804E2A34[];
extern void *beNDMWMdlItem_meta;
}
extern "C" {
void beNDMWMdlItem_fieldInit(){
 void *value0=beNDMWMdlItem_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E2A1C,2);
 void *value2=meta_field(value0,value1);
 void *value3=igViewerSceneInfoManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_804E2A24,lbl_804E2A2C,lbl_804E2A34,value1);
}
}
#pragma pop
