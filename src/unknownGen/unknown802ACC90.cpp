#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
void *fn_800BAAC4();
void fn_800CE098();
void fn_800CE0E4();
void *fn_800D2414();
void *fn_801B3FA8();
void *igMovieCodec_metaObject();
void *igTextureBindAttrList_metaObject();
void fn_802AC6D0();
void fn_802AC730();
extern char lbl_804CDBF8[];
extern char lbl_804CDC4C[];
extern char lbl_804CDCA0[];
extern char lbl_804CDCF4[];
extern char lbl_804CDD48[];
extern char lbl_804CDD4C[];
extern char lbl_804CDD50[];
extern char lbl_804CDD54[];
extern char lbl_804CDD58[];
extern void *igMovieInfo_meta;
extern void *igObject_meta;
}
extern "C" {
void igMovieInfo_fieldInit(){
 void *value0=igMovieInfo_meta;
 void *value2=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CDBF8,21);
 void *value3=meta_field(value0,value2);
 fn_80071694(value3,0);
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value2)+1));
 fn_80046E58(value4,lbl_804CDD48);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+52)=(void *)fn_802AC730;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value2)+3));
 fn_80053650(value5,-1);
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value2)+4));
 fn_80053650(value6,-1);
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value2)+5));
 fn_80053650(value7,-1);
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value2)+6));
 fn_80053650(value8,-1);
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value2)+7));
 void *value10=igTextureBindAttrList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value2)+8));
 fn_80046E58(value11,lbl_804CDD4C);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+52)=(void *)fn_800CE098;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value2)+9));
 fn_80046E58(value12,lbl_804CDD50);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+52)=(void *)fn_800CE098;
 void *value13=meta_field(value0,(reinterpret_cast<char *>(value2)+10));
 fn_80053650(value13,-1);
 void *value14=meta_field(value0,(reinterpret_cast<char *>(value2)+11));
 fn_80053650(value14,-1);
 void *value15=meta_field(value0,(reinterpret_cast<char *>(value2)+12));
 fn_80071694(value15,0);
 void *value16=meta_field(value0,(reinterpret_cast<char *>(value2)+13));
 void *value17=igMovieCodec_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value16)+56)=value17;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value16)+38)=0;
 void *value18=meta_field(value0,(reinterpret_cast<char *>(value2)+14));
 fn_80046E58(value18,lbl_804CDD54);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value18)+52)=(void *)fn_802AC6D0;
 void *value19=meta_field(value0,(reinterpret_cast<char *>(value2)+15));
 void *value20=fn_801B3FA8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value19)+56)=value20;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value19)+38)=0;
 void *value21=meta_field(value0,(reinterpret_cast<char *>(value2)+16));
 void *value22=fn_800D2414();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value21)+56)=value22;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value21)+38)=0;
 void *value23=meta_field(value0,(reinterpret_cast<char *>(value2)+17));
 void *value24=fn_800BAAC4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value23)+56)=value24;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value23)+38)=0;
 void *value25=meta_field(value0,(reinterpret_cast<char *>(value2)+18));
 fn_80046E58(value25,lbl_804CDD58);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value25)+38)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value25)+52)=(void *)fn_800CE0E4;
 void *value26=meta_field(value0,(reinterpret_cast<char *>(value2)+19));
 void *value1=igObject_meta;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value26)+56)=value1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value26)+38)=0;
 void *value27=meta_field(value0,(reinterpret_cast<char *>(value2)+20));
 fn_80053650(value27,-1);
 meta_setupFields(value0,lbl_804CDC4C,lbl_804CDCA0,lbl_804CDCF4,value2);
}
}
#pragma pop
