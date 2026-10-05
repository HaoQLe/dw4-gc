#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void *fn_8011E3C8();
extern char lbl_8055F3E8[6];
extern void *lbl_805639EC;
extern char lbl_805639F0[4];
}
extern "C" {
void fn_80121820(){
 void *meta=lbl_805639EC;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F3E8));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8011E3C8();
 field->unknown38=0;
 field->unknown1C=lbl_805639F0;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
