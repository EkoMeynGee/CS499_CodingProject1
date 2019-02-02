#include "knn.h"
#include <R.h>

void knn_interface(
  const double *train_inputs_ptr, //
  const double *train_label_ptr, //
  const double *test_input_ptr,
  const int *n_obervations_ptr, 
  const int *n_features_ptr, 
  const int *max_neighbors_ptr,
  double *test_predictions_ptr //
)
{
  int status = knn(train_inputs_ptr, train_label_ptr, test_input_ptr, *n_obervations_ptr, *n_features_ptr, *max_neighbors_ptr, test_predictions_ptr);
  
  if(status != 0)
    {
    error("non-zero exit status form knn");
    }
}