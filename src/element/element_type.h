#ifndef ELEMENT_TYPE_H
#define ELEMENT_TYPE_H

typedef struct {
  char *symbol;
  char *name;
  char *atomic_number;
  char *chemical_group_block;
  char *atomic_mass;
  char *standard_state;
  char *electron_configuration;
  char *oxidation_states;
  char *electronegativity;
  char *atomic_radius;
  char *ionization_energy;
  char *electron_affinity;
  char *melting_point;
  char *boiling_point;
  char *density;
  char *year_discovered;
  char *link;
} element_details;

typedef struct {
  char *symbol;
  char *name;
  element_details *element_details;
} element;

#endif
