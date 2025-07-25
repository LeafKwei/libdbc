#ifndef DBC_CORE_STRUCTS_HPP
#define DBC_CORE_STRUCTS_HPP

#include <memory>
#include "dbc/dbc.hpp"
#include "dbc/alias.hpp"
DBC_BEGIN

struct Dpair;
struct Ddomain;
using DpairPtr = std::shared_ptr<Dpair>;
using DdomainPtr = std::shared_ptr<Ddomain>;
using DpairWkr = std::weak_ptr<Dpair>;
using DdomainWkr = std::weak_ptr<Ddomain>;

struct Dpair{
    Dstring name;
    Dstring value;
    DpairPtr next;
    DpairWkr prev;

    Dpair(){std::cout << "Dpair" << std::endl;}
    ~Dpair(){std::cout << "~Dpair" <<  std::endl;}
};

struct Ddomain{
    Dstring name;
    DpairPtr pairs;
    DdomainPtr child;
    DdomainPtr next;
    DdomainWkr parent;
    DdomainWkr prev;

    Ddomain(){std::cout << "Ddomain" << std::endl;}
    ~Ddomain(){std::cout << "~Ddomain" <<  std::endl;}
};

DBC_END
#endif