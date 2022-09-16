#include "ReverseAstar.h"
#include "GameManager.h"
using namespace std;

ReverseAstar::ReverseAstar() {
	GameManager* gm = GameManager::getInstance();
	Player p = gm->GetPlayer();
	GoapActions = p.GetActionsCopy();
	
	ATaper3Foix* ataper3foix = new ATaper3Foix();
	EtreAccroupi* etreaccroupi = new EtreAccroupi();
	EtreDebout* etredebout = new EtreDebout();
	EtreEnLair* etreenlair = new EtreEnLair();
	VieDeLaTete* viedelatete = new VieDeLaTete();
	VieDesJambes* viedesjambes = new VieDesJambes();
	VieDuTorse* viedutorse = new VieDuTorse();


	GoapPreconditions.push_back(ataper3foix);
	GoapPreconditions.push_back(etreaccroupi);
	GoapPreconditions.push_back(etredebout);
	GoapPreconditions.push_back(etreenlair);
	GoapPreconditions.push_back(viedelatete);
	GoapPreconditions.push_back(viedesjambes);
	GoapPreconditions.push_back(viedutorse);

}

void ReverseAstar::startSimu() {
	Action* coutleplusfaible = nullptr;
	int coutActuel =10000000;

	// on check chaque noeud seectioné 
	for (Action* noeud : GoapActions) {
		// on prend le noeud avec le cout le plus faible
		for (int i = 0; i < GoapActions.size(); i++) {
			if (GoapActions[i]->GetCost() < coutActuel) {
				coutleplusfaible = GoapActions[i];
		}
			// si les precondition sont bonne on le stock
			if (coutleplusfaible->Can()== true)
				SimuActions.push_back(coutleplusfaible);
			//sinon on cherche les effet qui corresponde au precondition
			else {
				
			}
			
	}

	}
}