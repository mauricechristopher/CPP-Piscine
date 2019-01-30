#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "Entity.hpp"

typedef struct          s_squad
{
    Entity*            unit;
    struct s_squad*    prev;
    struct s_squad*    next;
}                      t_squad;

class Squad
{
private:

    int         _count;
    t_squad*    _squad;

    void _copySquad(Squad const & squad);
    void _deleteSquad(void);

public:

    Squad(void);
    Squad(Squad const & squad);
    virtual ~Squad(void);

    Squad& operator=(Squad const & squad);

    int getCount(void) const;
    t_squad* getSquad(void) const;
    int pushUnit(Entity*);
    t_squad* deleteUnit(t_squad*);
    virtual void updateSquad(void);
    virtual void displaySquad(void);
    virtual void refreshSquad(void);

    int isEmpty(void);

};

#endif
