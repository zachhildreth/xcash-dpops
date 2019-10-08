#ifndef BLOCK_VERIFIERS_FUNCTIONS_H_   /* Include guard */
#define BLOCK_VERIFIERS_FUNCTIONS_H_

/*
-----------------------------------------------------------------------------------------------------------
Function prototypes
-----------------------------------------------------------------------------------------------------------
*/

int start_new_round(void);
int start_current_round_start_blocks(void);
int data_network_node_create_block(void);
int block_verifiers_create_block(void);
int block_verifiers_send_data_socket(const char* MESSAGE);
#endif