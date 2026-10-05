#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void *fn_8011FFD8();
extern char lbl_80560B70[6];
extern void *lbl_80565A4C;
extern char lbl_80565A50[4];
}
extern "C" {
void fn_80217CBC(){
 void *meta=lbl_80565A4C;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_80560B70));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8011FFD8();
 field->unknown38=0;
 field->unknown1C=lbl_80565A50;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
