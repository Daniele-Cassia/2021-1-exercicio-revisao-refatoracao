#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"

using namespace std;

class Apartamento : public Imovel {
    public: 
        double valorDeVenda = calculaValorDeVenda();

        // essa função calcula o valor da comissao baseado no valor de venda do imóvel
        double comissao() {
            return valorDeVenda * 0.04;
        }

        void print() {
            std::cout << "[Apartamento]" << endl;
            Imovel::print();
            std::cout << "Area: " << area << endl
                << "  Quartos: " << quartos << endl
                << "  Banheiros: " << banheiros << endl
                << "  Vagas: " << vagas << endl
                << "Taxa de Comissão: " << 4 << "%" << endl
                << "Valor Comissão: R$ " << fixed << setprecision(2) << comissao << endl
                << "Valor de Venda: R$ " << fixed << setprecision(2) << valorDeVenda << endl;
        }
};
#endif