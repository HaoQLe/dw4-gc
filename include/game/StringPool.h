// Pooled strings (Alchemy's string pool), as the game code assigns them.
#ifndef GAME_STRINGPOOL_H
#define GAME_STRINGPOOL_H
#include <igStringPoolItem.h>
#include <igCore/igStringRef.h>

extern "C" {
extern void *lbl_80562140[];                                    // [0]: the string pool container, created on first use
void *fn_80054140(unsigned int size);                           // allocates
void *fn_80053F28(void *container);                             // the string pool container's constructor
const char *fn_80054094(void *container, const char *text);     // a pooled copy of text (null for null)
}

// A pooled copy of text, creating the string pool on first use.
static inline const char *pooledString(const char *text)
{
    if (!lbl_80562140[0]) {
        void *container = fn_80054140(0x10);
        if (container) container = fn_80053F28(container);
        lbl_80562140[0] = container;
    }
    return fn_80054094(lbl_80562140[0], text);
}

// Assigns a pooled string to a string member, releasing the old one.
static inline void setString(const char *&member, const char *text)
{
    const char *value = pooledString(text);
    if (member) reinterpret_cast<const Gap::Core::igStringPoolItem *>(member - 8)->release();
    member = value;
}

// igStringRef's assignment: the new pooled string first, then the old one released.
inline Gap::Core::igStringRef &Gap::Core::igStringRef::operator=(const igChar *string)
{
    const igChar *pooled = pooledString(string);
    release();
    _string = pooled;
    return *this;
}

#endif
