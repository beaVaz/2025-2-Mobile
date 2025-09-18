class Produto {
    String nome;
    double valorUnitario;
    
@override
    Produto(this.nome, this.valorUnitario);
    String toString(){
        return 'Produto: $nome - Valor:R\$ ${valorUnitario.toStringAsFixed(2)}';
    }
