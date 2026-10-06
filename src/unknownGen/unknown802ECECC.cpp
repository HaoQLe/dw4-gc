#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80302B14(void *);
void fn_80302B40(void *);
void fn_80302C3C(void *);
void fn_80302D08(void *,void *);
void fn_80302D58(void *,void *);
void fn_80302DA8(void *,void *);
void fn_80302DB8(void *,void *);
extern void *lbl_80535908;
}
extern "C" {
void fn_802ECECC(){
 fn_80302B14(lbl_80535908);
}
void fn_802ECEF8(){
 fn_80302B40(lbl_80535908);
}
void fn_802ECF24(){
 fn_80302C3C(lbl_80535908);
}
void fn_802ECF50(int p0){
 fn_80302D08(lbl_80535908,(void *)p0);
}
void fn_802ECF80(int p0){
 fn_80302D58(lbl_80535908,(void *)p0);
}
void fn_802ECFB0(int p0){
 fn_80302DB8(lbl_80535908,(void *)p0);
}
void fn_802ECFE0(int p0){
 fn_80302DA8(lbl_80535908,(void *)p0);
}
}
#pragma pop
