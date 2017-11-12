#ifndef _U_COREFACTORY_H
#define _U_COREFACTORY_H

#include <unordered_map>

#include "core/IdManager.h"
#include "entity/Entity.h"
#include "core/UniqueId.h"
#include "map/Map.h"

class CoreFactory {
private:
  static CoreFactory m_instance;

  IdManager *factoryIdManagerEntity;
  IdManager *factoryIdManagerMap;

  std::unordered_map<id_type, Entity*> entities;
  std::unordered_map<id_type, Map*> maps;

  CoreFactory& operator= (const CoreFactory&){}
  CoreFactory (const CoreFactory&){};
public:
  static CoreFactory& instance();
  CoreFactory();

  // New
  IdManager& getIdManagerEntity();
  IdManager& getIdManagerMap();

  Entity& getNewEntity();

  Entity& getEntity(id_type id);

  Map& getNewMap();

  Map& getMap(id_type id);

  // Delete
  void deleteEntity(id_type &id);
  void deleteMap(id_type &id);

  virtual ~CoreFactory();

};

#endif //_U_COREFACTORY_H
