#pragma once
#include "NPC.hpp"

enum class Types;
class NPC;
class NPCvector;

class INPCVisitor{
public:
    virtual Types visit(const NPC&) const = 0;
    virtual Types visit(const NPCvector&) const = 0;
};

class NPCFightVisitor: public INPCVisitor{
public:
    NPCFightVisitor() = default;
    ~NPCFightVisitor() = default;
    
    Types visit(const NPC&) const override;
    Types visit(const NPCvector&) const override;
};