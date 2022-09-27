class node
{
  public:
    typedef double data_type;

  node(const data_type& ini_data =0, node* ini_link=NULL){
    data = ini_data;
    link = ini_link;
  }

  void set_data (const data_type& new_data) {data = new_data;}
  void set_link (node* new_link) {link = new_link;}

  data_type get_data() const {return data;}
  const node* get_link() const {return link;}
  node* get_link() {return link;}

  private:
    data_type data;
    node * link;
};