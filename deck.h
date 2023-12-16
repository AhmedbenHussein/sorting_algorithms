#ifndef DECK_H
#define DECK_H

#include <stdlib.h>
/**
 * struct card_s - Playing ccard
 *
 * @value: Value of  cardc
 * From "Ace" to "King"
 * @kind: Kind of cardc
 */
typedef struct card_s
{
        const char *value;
        const kind_t kind;
} card_t;
/**
 * enum kind_e - Enumeraation of card suits.
 * @SPADE: Spades suitt.
 * @HEART: Hearts suitt.
 * @CLUB: Clubs suitt.
 * @DIAMOND: Diamonds suitt.
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;


/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to card of  node
 * @prev: Pointer to previouss node of  list
 * @next: Pointer to next nnode of list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
