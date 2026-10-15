#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_8002E824();
void *fn_800324CC();
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSystem_metaObject();
void *beMessenger_metaObject();
void *igViewerSceneInfoManager_metaObject();
extern char lbl_804D21E0[];
extern char lbl_804D2210[];
extern char lbl_804D2240[];
extern char lbl_804D2270[];
extern void *beFileListInfoManager_meta;
}
extern "C" {
void beFileListInfoManager_fieldInit(){
 void *value0=beFileListInfoManager_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D21E0,12);
 void *value2=meta_field(value0,value1);
 void *value3=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=igViewerSceneInfoManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 fn_80053650(value8,-1);
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value10=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value12=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value11)+52)=1;
 void *value13=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value14=fn_800324CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value13)+52)=1;
 void *value15=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value16=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value15)+52)=1;
 void *value17=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 void *value18=fn_8002E824();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value17)+56)=value18;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value17)+52)=1;
 meta_setupFields(value0,lbl_804D2210,lbl_804D2240,lbl_804D2270,value1);
}
}
#pragma pop
