//
//  query_manager.cpp
//  Unit Neurons
//
//  Created by John Lime on 2020/04/06.
//  Copyright © 2020 Mioto Takahashi. All rights reserved.
//

#include "fb_query_manager.hpp"
#include <stdlib.h>
#include <string.h>

FeedbackQueryManager:: FeedbackQueryManager()
{
    query_list = (FeedbackQuery*) malloc(0 * sizeof(FeedbackQuery));
    num_query = 0;
}

void FeedbackQueryManager:: add_query(FeedbackQuery _new)
{
    query_list = (FeedbackQuery*) realloc(query_list, num_query * sizeof(FeedbackQuery));
    query_list[num_query] = _new;
    num_query ++;
}

void FeedbackQueryManager:: execute_all()
{
    while (num_query != 0)
    {
        query_list[0].neuron->feedback(query_list[0].fb_input);                     // execute the top function
        memmove(query_list, query_list + 1, num_query * sizeof(FeedbackQuery));     // move 1 element upward
        num_query --;
    }
    free(query_list);
}